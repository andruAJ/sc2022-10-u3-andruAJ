using System;
using Eval3UnidadSComp.Clases;

namespace Eval3UnidadSComp
{
    class Program
    {
        static void Main(string[] args)
        {
            Futbol futbol = new Futbol();
            futbol.Balon = true;
            futbol.Pie = true;
            futbol.jugadores = 22;

            Basketball baloncesto = new Basketball();
            baloncesto.Balon = true;
            baloncesto.Pie = false;
            baloncesto.TiempoExtra = false;

            Ultimate ultimate = new Ultimate();
            ultimate.Balon = false;
            ultimate.Pie = false;
            ultimate.Disco = true;

            Television television = new Television();

            television.EnTransmision(ultimate);
        }
    }
}
