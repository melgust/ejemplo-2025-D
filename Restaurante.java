import java.util.Scanner;

public class Restaurante {

    private static final double PRECIO_HAMBURGUESA = 5.00;
    private static final double PRECIO_PIZZA = 7.50;
    private static final double PRECIO_POLLO = 6.00;
    private static final double PRECIO_CARNE = 8.00;
    private static final double PRECIO_ENSALADA = 4.50;

    private static final double DESCUENTO_PORCENTAJE = 0.10;
    private static final double MONTO_MINIMO_DESCUENTO = 30.00;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int opcion;
        double totalCuenta = 0;

        do {
            System.out.println("\n¡Bienvenido al Restaurante! Elige una opción:");
            System.out.println("1-3: Menú de Hamburguesas");
            System.out.println("4-6: Menú de Pizza");
            System.out.println("7-9: Menú de Pollo");
            System.out.println("10-13: Menú de Carne");
            System.out.println("14-16: Menú de Ensaladas");
            System.out.println("4: Salir");
            System.out.print("Ingresa el número del menú: ");
            opcion = scanner.nextInt();

            if (opcion == 4) {
                break;
            }

            if (opcion >= 1 && opcion <= 3) {
                System.out.println("Has elegido un menú de Hamburguesas. Precio: $" + PRECIO_HAMBURGUESA);
                totalCuenta += PRECIO_HAMBURGUESA;
            } else if (opcion >= 4 && opcion <= 6) {
                System.out.println("Has elegido un menú de Pizza. Precio: $" + PRECIO_PIZZA);
                totalCuenta += PRECIO_PIZZA;
            } else if (opcion >= 7 && opcion <= 9) {
                System.out.println("Has elegido un menú de Pollo. Precio: $" + PRECIO_POLLO);
                totalCuenta += PRECIO_POLLO;
            } else if (opcion >= 10 && opcion <= 13) {
                System.out.println("Has elegido un menú de Carne. Precio: $" + PRECIO_CARNE);
                totalCuenta += PRECIO_CARNE;
            } else if (opcion >= 14 && opcion <= 16) {
                System.out.println("Has elegido un menú de Ensaladas. Precio: $" + PRECIO_ENSALADA);
                totalCuenta += PRECIO_ENSALADA;
            } else {
                System.out.println("Opción inválida. Ingresa un número entre 1 y 16.");
                continue;
            }

            System.out.println("Total actual: $" + totalCuenta);

        } while (opcion != 4);

        if (totalCuenta > MONTO_MINIMO_DESCUENTO) {
            double descuento = totalCuenta * DESCUENTO_PORCENTAJE;
            totalCuenta -= descuento;
            System.out.println("Descuento aplicado del 10%. Nuevo total: $" + totalCuenta);
        } else {
            System.out.println("No se aplicó descuento.");
        }

        System.out.println("Gracias por tu visita. Total final: $" + totalCuenta);
        scanner.close();
    }
}