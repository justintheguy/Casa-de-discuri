#include <iostream>
#include <vector>
#include <string>
#include "artist.h"
#include "impresar.h"
#include "melodie.h"
#include "album.h"
#include "solist.h"
#include "studio_builder.h"
#include "festival.h"


using namespace std;

int main() {
    try {

        //artist a2{"Tailor Swift", "single", "country", 2900, 40 };
        //artist a3{"Metallica", "band", "metal", 5000, 40};
        //artist a4{ "One_Direction", "band", "pop", 5000, 40};


       // impresar i2{"Jack_Jones", 15};
        //impresar i3{"Chris_McLean", 25};

        melodie m1{"Atlas,Rise", "metal", 390, 2016};
        melodie m2{"Moth_Into_Flame", "metal", 350, 2016};
        melodie m3{"Stupid_Love", "pop", 194, 2020};



    studio_builder s;
    studio st1 = s.nume("Music Home").locatie("Strada Panselutelor").microfon("SonyMS45").casti_inregistrare("SamsungTK49").nr_camere(4).tip_locatie("bloc").tip_microfon("wireless").tip_casti_inregistrare("cu fir").build();
    cout << st1;
    impresar<int> i1{"Todd_Stevens", 20, {st1}};
    festival f1 = festival_factory::festival_neversea();
    cout << f1;
        solist a1{"Lady_Gaga", "single", "pop", 3000.00, 40.00, {f1}, 3, {"chitara"}, "mezzosoprana", 1, {"pop", "pop-rock"}};

}
    catch(runtime_error &eroare) {
        cout << eroare.what() << "\n";
    }

    return 0;
}



