using System;
using System.Collections.Generic;
using System.Text;

namespace Eval3UnidadSComp.Clases
{
    public class Television
    {
        List<Deporte> lista = new List<Deporte>();

        public void EnTransmision(Deporte deporte) 
        {
            lista.Add(deporte);
            deporte.Narracion();
        }
    }
}
