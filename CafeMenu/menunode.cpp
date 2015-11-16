#include "menunode.h"
extern QObject* garbage;

MenuNode::MenuNode(QString title) :
    mTitle(title)
{
    this->setParent(garbage);
}

QString MenuNode::title() const
{
    return mTitle;
}
