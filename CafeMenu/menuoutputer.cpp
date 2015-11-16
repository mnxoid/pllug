#include "menuoutputer.h"
extern QObject* garbage;

MenuOutputer::MenuOutputer()
{
    this->setParent(garbage);
}
