using System;
using System.Collections.Generic;
using System.Text;

namespace Eval3UnidadSComp.Clases
{
    public class Futbol : Deporte
    {
        public int jugadores;

        public override void Narracion() 
        {
            Console.WriteLine("Pardo le pone el pase a Pons, y es ¡Gooooooooool!");
        }
    }
}
