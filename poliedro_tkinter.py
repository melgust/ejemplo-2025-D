import tkinter as tk
from tkinter import ttk
import math

class PolyhedronViewer:
    def __init__(self, root):
        self.root = root
        self.root.title("Poliedros - Visualizador")
        
        # Canvas para dibujar
        self.canvas = tk.Canvas(root, width=600, height=400, bg='white')
        self.canvas.pack(pady=10)
        
        # Selector de poliedro
        frame = ttk.Frame(root)
        frame.pack(pady=10)
        
        ttk.Label(frame, text="Seleccionar poliedro:").pack(side=tk.LEFT)
        self.poly_var = tk.StringVar(value="tetraedro")
        combo = ttk.Combobox(frame, textvariable=self.poly_var, 
                           values=["tetraedro", "cubo", "octaedro", "dodecaedro", "icosaedro", "prisma", "piramide"])
        combo.pack(side=tk.LEFT, padx=10)
        combo.bind('<<ComboboxSelected>>', self.draw_polyhedron)
        
        # Definir poliedros
        self.polyhedra = {
            "tetraedro": {
                "vertices": [(200, 100), (100, 300), (300, 300), (250, 200)],
                "edges": [(0,1), (0,2), (0,3), (1,2), (1,3), (2,3)]
            },
            "cubo": {
                "vertices": [(150, 150), (250, 150), (250, 250), (150, 250),
                           (200, 100), (300, 100), (300, 200), (200, 200)],
                "edges": [(0,1), (1,2), (2,3), (3,0), (4,5), (5,6), (6,7), (7,4),
                         (0,4), (1,5), (2,6), (3,7)]
            },
            "octaedro": {
                "vertices": [(300, 200), (200, 200), (250, 150), (250, 250), 
                           (250, 100), (250, 300)],
                "edges": [(0,2), (2,1), (1,3), (3,0), (0,4), (1,4), (2,4),
                         (0,5), (1,5), (3,5)]
            },
            "dodecaedro": {
                "vertices": [(300, 200), (250, 120), (350, 120), (380, 180), (380, 220),
                           (350, 280), (250, 280), (220, 220), (220, 180), (270, 160),
                           (330, 160), (330, 240), (270, 240)],
                "edges": [(0,1), (1,2), (2,3), (3,4), (4,5), (5,6), (6,7), (7,8), (8,1),
                         (0,9), (9,10), (10,3), (0,11), (11,12), (12,6), (9,12), (10,4), (11,5)]
            },
            "icosaedro": {
                "vertices": [(300, 150), (250, 180), (350, 180), (280, 120), (320, 120),
                           (230, 220), (370, 220), (300, 250), (200, 200), (400, 200),
                           (275, 280), (325, 280), (300, 100)],
                "edges": [(0,1), (0,2), (0,3), (0,4), (1,3), (1,5), (1,8), (2,4), (2,6), (2,9),
                         (3,4), (3,12), (5,7), (5,8), (6,7), (6,9), (7,10), (7,11), (8,5), (9,6),
                         (10,11), (12,0)]
            },
            "prisma": {
                "vertices": [(200, 150), (300, 150), (250, 200), (250, 100), (350, 100), (300, 150)],
                "edges": [(0,1), (1,2), (2,0), (3,4), (4,5), (5,3), (0,3), (1,4), (2,5)]
            },
            "piramide": {
                "vertices": [(200, 250), (300, 250), (300, 200), (200, 200), (250, 120)],
                "edges": [(0,1), (1,2), (2,3), (3,0), (0,4), (1,4), (2,4), (3,4)]
            }
        }
        
        self.draw_polyhedron()
    
    def draw_polyhedron(self, event=None):
        self.canvas.delete("all")
        poly_name = self.poly_var.get()
        poly = self.polyhedra[poly_name]
        
        # Dibujar aristas
        for edge in poly["edges"]:
            v1, v2 = poly["vertices"][edge[0]], poly["vertices"][edge[1]]
            self.canvas.create_line(v1[0], v1[1], v2[0], v2[1], width=2)
        
        # Dibujar vértices
        for i, vertex in enumerate(poly["vertices"]):
            x, y = vertex
            self.canvas.create_oval(x-5, y-5, x+5, y+5, fill='red')
            self.canvas.create_text(x+15, y-15, text=str(i), font=('Arial', 10))
        
        # Título
        self.canvas.create_text(300, 30, text=f"Poliedro: {poly_name.capitalize()}", 
                              font=('Arial', 16, 'bold'))

if __name__ == "__main__":
    root = tk.Tk()
    app = PolyhedronViewer(root)
    root.mainloop()