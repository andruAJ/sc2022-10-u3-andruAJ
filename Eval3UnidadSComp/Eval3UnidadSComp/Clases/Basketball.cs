using System;

namespace Eval3UnidadSComp.Clases
{
    class Basketball : Deporte
    {
        public bool TiempoExtra;

        public override void Narracion()
        {
            Console.WriteLine("La pelota le llega a Kobeeee, ¡Oh, tres puntos para los Lakers!");
        }
    }
}
