#include <iostream>
#include <vector>
#include <string>
#include "artist.h"
#include "impresar.h"
#include "melodie.h"
#include "album.h"
#include "solist.h"
#include "formatie.h"
#include "dj.h"
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
        album alb1{"Atlas", "metal", 3, 2020};
        alb1.adauga(m1);
        alb1.adauga(m2);
        alb1.adauga(m3);
        //cout << alb1;


    studio_builder s;
    studio st1 = s.nume("Music Home").locatie("Strada Panselutelor").microfon("SonyMS45").casti_inregistrare("SamsungTK49").nr_camere(4).tip_locatie("bloc").tip_microfon("wireless").tip_casti_inregistrare("cu fir").build();
    //cout << st1;
    impresar<int> i1{"Todd_Stevens", 20, {st1}};
    festival f1 = festival_factory::festival_neversea();
    //cout << f1;
        solist a1{"Lady_Gaga", "single", "pop", 3000.00, 40.00, {f1}, 3, {"chitara"}, "mezzosoprana", 1, {"pop", "pop-rock"}};
        formatie a2{"Metallica", "trupa", "metal", 5000, 39.5, {f1}, 4, "James Hetfield", 10, 8  };
        dj a3{"DJ_Kaleed", "single", "pop", 3000, 35, {f1}, "deep house", {"deep house", "dubstap"},1000 };
        i1.adauga(a1);
        i1.adauga(a2);
        i1.adauga(a3);
        i1.sortare_artisti();
        //cout << a1.obtine_rating();
        //cout << a2.obtine_rating();
        cout << a3.obtine_rating();

}
    catch(runtime_error &eroare) {
        cout << eroare.what() << "\n";
    }

    return 0;
}



