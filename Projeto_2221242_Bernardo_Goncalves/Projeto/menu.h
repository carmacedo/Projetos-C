#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED


e_logo()
{
 printf(R"EOF(                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKKKKKKKKKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXK0kxdolc::;;;;;;::clodxk0KKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXK0xoc;'.......'',,,,''.......';cox0KXXXXKXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXK0ko:'...';:loxkOO00KKKK00OOkxol:,'...':ok0XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXKkl,...,:oxOKKXXXXXXXXXXXXXXXXXXXXKKOxo:'...,lkKXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXK0d;...,lx0KXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXK0xl,...;d0KXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXKOo,..'cx0XXXXXKOkkkkkkkkkkkkkkkkkkkkkkkOKXXXXXX0xc'..,oOKXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXX0o,..'oOKXXXXXXXk;.......................,xXXXXXXXXKOo'..,d0XXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXKk:..'lOKXXXXXXXXX0xdddddddddoolllc;'..    .oKXXXXXXXXXKOl'..:kKXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXX0o'..:kKXXXXXXXXXXXXXXXXXXXXXXXXXXXXK0ko,.  .lKXXXXXXXXXXXKk:..'o0XXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXX0l..'o0XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXK0l. .c0XXXXXXXXXXXXX0o'..l0XXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXX0c..,xKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX0l. :0XXXXXXXXXXXXXXKx,..c0XXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXX0l..,xKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXk' ;OXXXXXXXXXXXXXXXKx,..l0XXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXKo. 'xKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXOc':OXXXXXXXXXXXXXXXXKx' .oKXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXk, .oKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKkolkKK000KXXXXXXXXXXXXXXXXXKo. ,kXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXKl..;OXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKo..c0XXXXXXXXXXXXXXXXXXXXXXXO;..lKXXXXXXXXXXXX
                                                               XXXXXXXXXXXXO, .oKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX0c..c0XXXXXXXXXXXXXXXXXXXXXXXKo. ,kXXXXXXXXXXXX
                                                               XXXXXXXXXXXKd. ,kXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKd' .c0XXXXXXXXXXXXXXXXXXXXXXXXk, .dXXXXXXXXXXXX
                                                               XXXXXXXXXXXKo. ;OXXXXXXXXXXXXXXXXXXXXXXXXXK00000Okxdc.. .c0XXXXXXXXXXXXXXXXXXXXXXXXO;..oKXXXXXXXXXXX
                                                               XXXXXXXXXXXKl..:0XXXXXXXXXXXXXXXXXXXXXXXXKo,''''....    .c0XXXXXXXXXXXXXXXXXXXXXXXX0:..lKXXXXXXXXXXX
                                                               XXXXXXXXXXXKl..:0XXXXXXXXXXXXXXXXXXXXXXXXKxcccc::;,'..  .c0XXXXXXXXXXXXXXXXXXXXXXXX0:..lKXXXXXXXXXXX
                                                               XXXXXXXXXXXKo. ,OXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKKKK0x:. .c0XXXXXXXXXXXXXXXXXXXXXXXXO, .oKXXXXXXXXXXX
                                                               XXXXXXXXXXXXx' .xXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKXX0:..c0XXXXXXXXXXXXXXXXXXXXXXXKx. 'xXXXXXXXXXXXX
                                                               XXXXXXXXXXXX0:..c0XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKo..c0XXXXXXXXXXXXXXXXXXXXXXX0c..:0XXXXXXXXXXXX
                                                               XXXXXXXXXXXXKd. 'xXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKd,'l0K0OOKXXXXXXXXXXXXXXXXXKx' .dKXXXXXXXXXXXX
                                                               XXXXXXXXXXXXX0c..:OXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXK0O0XO:.;kXXXXXXXXXXXXXXXXXO:..c0XXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXKk;..c0XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKXk, 'kXXXXXXXXXXXXXXXX0c..,kXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXKx'..l0XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKd. 'kXXXXXXXXXXXXXXX0l..,xKXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXKx'..cOXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX0:. 'xXXXXXXXXXXXXXKOc..,xKXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXKk;..;xKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXK0l.  'kXXXXXXXXXXXXKx;..;kKXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXKOc...lOKXXXXXXXXXXXXXXXXXXXXXXXXXXXK0ko;.   'kXXXXXXXXXXKOl...cOKXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXKx,..'oOKXXXXXXXXKkxxxxxxxxxddoooc:,..     'kXXXXXXXXKOo'..;xKXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXX0o'..'lkKXXXXXXk;........................,kXXXXXXKOl'..'o0XXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXKOo,...:dOKXXX0kxxxxxxxxxxdxxxxxxxxxxxxxk0XXXKOd:...,oOKXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXK0x:'..':ok0KXXXXXXXXXXXXXXXXXXXXXXXXXXK0ko:'..':x0XXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXKOd:'...,:ldkO0KKXXXXXXXXXXXXKK0Okdl:'...':dOKXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXK0xl:,.....,;:cloooddooolc:;,.....,:lx0KXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXK0kdoc:,'..............',:coxk0KXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKK0OkkxxxxxxxxkkO0KKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX)EOF");
}

menu()
{
    printf(R"EOF(

                                                                                 ______     _   __      _   _             _          _ _  /\/|
                                                                                |  ____|   | | /_/     | | (_)           | |        (_) ||/\/
                                                                                | |__   ___| | ___  ___| |_ _  ___ __ _  | |     ___ _| | ___   ___  ___
                                                                                |  __| / __| |/ _ \/ __| __| |/ __/ _` | | |    / _ \ | |/ _ \ / _ \/ __|
                                                                                | |___| (__| |  __/ (__| |_| | (_| (_| | | |___|  __/ | | (_) |  __/\__ \
                                                                                |______\___|_|\___|\___|\__|_|\___\__,_| |______\___|_|_|\___/ \___||___/



                                                                                             ------------------------------------
                                                                                             |----------------Menu--------------|
                                                                                             |             1-Registar           |
                                                                                             |              2- Login            |
                                                                                             |              0- Sair             |
                                                                                             |----------------------------------|
                                                                                             ------------------------------------)EOF");
}

menu_catalogo()
{
    printf(R"EOF(
                                                               ------------------------------------
                                                               |--------------Catálogo------------|
                                                               |          1- "Os Lusíadas"        |
                                                               |           2- "Os Maias"          |
                                                               |   3- "O Livro Do Desassossego"   |
                                                               |             4- Fatura            |
                                                               |         5- Página Inicial        |
                                                               |              0- Sair             |
                                                               |----------------------------------|
                                                               ------------------------------------)EOF");
}
menu_catalogo_adm()
{
    printf(R"EOF(
                                                               ------------------------------------
                                                               |--------------Catálogo------------|
                                                               |          1- "Os Lusíadas"        |
                                                               |           2- "Os Maias"          |
                                                               |   3- "O Livro Do Desassossego"   |
                                                               |             4- Fatura            |
                                                               |         5- Página Inicial        |
                                                               |         6- Administração         |
                                                               |              0- Sair             |
                                                               |----------------------------------|
                                                               ------------------------------------)EOF");
}


#endif // MENU_H_INCLUDED
