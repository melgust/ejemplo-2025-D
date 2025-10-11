import networkx as nx
import matplotlib.pyplot as plt
import numpy as np

# Función para dibujar el grafo plano de un poliedro
def plot_polyhedron(vertices, faces, title, ax):
    G = nx.Graph()
    for face in faces:
        for i in range(len(face)):
            if face[i] < len(vertices) and face[(i + 1) % len(face)] < len(vertices):
                G.add_edge(face[i], face[(i + 1) % len(face)])
    
    # Proyección 2D simple (usar x, y)
    pos = {i: (vertices[i][0], vertices[i][1]) for i in range(len(vertices))}
    nx.draw(G, pos=pos, ax=ax, with_labels=True, node_size=50, edge_color='black', font_size=8)
    ax.set_title(title)
    ax.axis('equal')

# Datos de los cinco sólidos
phi = (1 + np.sqrt(5)) / 2  # Número áureo

# 1. Tetraedro
tetra_vertices = np.array([[1, 1, 1], [-1, -1, 1], [-1, 1, -1], [1, -1, -1]])
tetra_faces = [[0, 1, 2], [0, 3, 1], [0, 2, 3], [1, 3, 2]]

# 2. Cubo
cube_vertices = np.array([
    [-1, -1, -1], [1, -1, -1], [1, 1, -1], [-1, 1, -1],
    [-1, -1, 1], [1, -1, 1], [1, 1, 1], [-1, 1, 1]
])
cube_faces = [
    [0, 1, 2, 3], [4, 5, 6, 7],
    [0, 1, 5, 4], [2, 3, 7, 6],
    [1, 2, 6, 5], [0, 3, 7, 4]
]

# 3. Octaedro
octa_vertices = np.array([
    [1, 0, 0], [-1, 0, 0], [0, 1, 0],
    [0, -1, 0], [0, 0, 1], [0, 0, -1]
])
octa_faces = [
    [0, 2, 4], [2, 1, 4], [1, 3, 4], [3, 0, 4],
    [0, 2, 5], [2, 1, 5], [1, 3, 5], [3, 0, 5]
]

# 4. Dodecaedro (simplificado)
dodeca_vertices = np.array([
    [1, 1, 1], [1, 1, -1], [1, -1, 1], [1, -1, -1],
    [-1, 1, 1], [-1, 1, -1], [-1, -1, 1], [-1, -1, -1],
    [0, phi, 1/phi], [0, phi, -1/phi], [0, -phi, 1/phi], [0, -phi, -1/phi]
])
dodeca_faces = [
    [0, 2, 3, 1], [4, 5, 7, 6], [0, 1, 9, 8],
    [2, 6, 10, 3], [1, 3, 11, 9], [4, 8, 9, 5]
]

# 5. Icosaedro (simplificado)
icosa_vertices = np.array([
    [0, 1, phi], [0, 1, -phi], [0, -1, phi], [0, -1, -phi],
    [1, phi, 0], [1, -phi, 0], [-1, phi, 0], [-1, -phi, 0],
    [phi, 0, 1], [-phi, 0, 1], [phi, 0, -1], [-phi, 0, -1]
])
icosa_faces = [
    [0, 2, 8], [0, 8, 4], [0, 4, 6], [0, 6, 9], [0, 9, 2],
    [1, 3, 10], [1, 10, 4], [1, 4, 8], [2, 5, 7], [3, 7, 11]
]

# Graficar todos
fig, axs = plt.subplots(1, 5, figsize=(25, 5))
plot_polyhedron(tetra_vertices, tetra_faces, "Tetraedro", axs[0])
plot_polyhedron(cube_vertices, cube_faces, "Cubo", axs[1])
plot_polyhedron(octa_vertices, octa_faces, "Octaedro", axs[2])
plot_polyhedron(dodeca_vertices, dodeca_faces, "Dodecaedro", axs[3])
plot_polyhedron(icosa_vertices, icosa_faces, "Icosaedro", axs[4])
plt.tight_layout()
plt.show()
