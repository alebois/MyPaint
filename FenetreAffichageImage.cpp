#include "FenetreAffichageImage.h"

FenetreAffichageImage::~FenetreAffichageImage()
{

}

FenetreAffichageImage::setFenetrePicture(QString *name){

    QPicture *mypic;
    mypic->load(name);
    this->setPicture( *mypic );

}
