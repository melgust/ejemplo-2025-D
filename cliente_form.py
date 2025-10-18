import tkinter as tk
from tkinter import ttk, messagebox

class Cliente:
    def __init__(self, nombre, apellido, cui, direccion, telefono, correo):
        self.nombre = nombre
        self.apellido = apellido
        self.cui = cui
        self.direccion = direccion
        self.telefono = telefono
        self.correo = correo

    def getNombreCompleto(self):
        return self.nombre + ' ' + self.apellido

class ClienteForm:
    def __init__(self, root):
        self.root = root
        self.root.title("Formulario Cliente")
        self.clientes = []
        
        # Campos del formulario
        ttk.Label(root, text="Nombre:").grid(row=0, column=0, sticky="w", padx=5, pady=5)
        self.nombre_var = tk.StringVar()
        ttk.Entry(root, textvariable=self.nombre_var).grid(row=0, column=1, padx=5, pady=5)
        
        ttk.Label(root, text="Apellido:").grid(row=1, column=0, sticky="w", padx=5, pady=5)
        self.apellido_var = tk.StringVar()
        ttk.Entry(root, textvariable=self.apellido_var).grid(row=1, column=1, padx=5, pady=5)
        
        ttk.Label(root, text="CUI:").grid(row=2, column=0, sticky="w", padx=5, pady=5)
        self.cui_var = tk.StringVar()
        ttk.Entry(root, textvariable=self.cui_var).grid(row=2, column=1, padx=5, pady=5)
        
        ttk.Label(root, text="Dirección:").grid(row=3, column=0, sticky="w", padx=5, pady=5)
        self.direccion_var = tk.StringVar()
        ttk.Entry(root, textvariable=self.direccion_var).grid(row=3, column=1, padx=5, pady=5)
        
        ttk.Label(root, text="Teléfono:").grid(row=4, column=0, sticky="w", padx=5, pady=5)
        self.telefono_var = tk.StringVar()
        ttk.Entry(root, textvariable=self.telefono_var).grid(row=4, column=1, padx=5, pady=5)
        
        ttk.Label(root, text="Correo:").grid(row=5, column=0, sticky="w", padx=5, pady=5)
        self.correo_var = tk.StringVar()
        ttk.Entry(root, textvariable=self.correo_var).grid(row=5, column=1, padx=5, pady=5)
        
        # Botones
        ttk.Button(root, text="Agregar Cliente", command=self.agregar_cliente).grid(row=6, column=0, pady=10)
        ttk.Button(root, text="Mostrar Clientes", command=self.mostrar_clientes).grid(row=6, column=1, pady=10)
        
        # Lista de clientes
        self.lista = tk.Listbox(root, width=50, height=10)
        self.lista.grid(row=7, column=0, columnspan=2, padx=5, pady=5)
    
    def agregar_cliente(self):
        try:
            cliente = Cliente(
                self.nombre_var.get(),
                self.apellido_var.get(),
                int(self.cui_var.get()),
                self.direccion_var.get(),
                int(self.telefono_var.get()),
                self.correo_var.get()
            )
            self.clientes.append(cliente)
            self.limpiar_campos()
            messagebox.showinfo("Éxito", "Cliente agregado correctamente")
        except ValueError:
            messagebox.showerror("Error", "CUI y Teléfono deben ser números")
    
    def mostrar_clientes(self):
        self.lista.delete(0, tk.END)
        for i, cliente in enumerate(self.clientes):
            info = f"{i+1}. {cliente.getNombreCompleto()} - CUI: {cliente.cui} - Tel: {cliente.telefono}"
            self.lista.insert(tk.END, info)
    
    def limpiar_campos(self):
        for var in [self.nombre_var, self.apellido_var, self.cui_var, 
                   self.direccion_var, self.telefono_var, self.correo_var]:
            var.set("")

if __name__ == "__main__":
    root = tk.Tk()
    app = ClienteForm(root)
    root.mainloop()