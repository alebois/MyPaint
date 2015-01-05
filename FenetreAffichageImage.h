#ifndef FENETREAFFICHAGEIMAGE_H
#define FENETREAFFICHAGEIMAGE_H

#include <QLabel>
#include <QString>

class FenetreAffichageImage : public QLabel
{
    Q_OBJECT

public:
    explicit FenetreAffichageImage(QWidget *parent = 0);
    ~FenetreAffichageImage();
    void setFenetrePicture( QString* name );

};

#endif // FENETREAFFICHAGEIMAGE_H
