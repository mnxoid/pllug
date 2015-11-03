#ifndef CIRCULARLAYOUT_H
#define CIRCULARLAYOUT_H

#include <QLayout>
#include <QtGlobal>
#include <QStyle>

class CircularLayout : public QLayout
{
    Q_OBJECT
public:
        explicit CircularLayout(QWidget *parent, int margin = -1, int hSpacing = -1, int vSpacing = -1);
        explicit CircularLayout(int margin = -1, int hSpacing = -1, int vSpacing = -1);
        ~CircularLayout();

        void addItem(QLayoutItem *item);
        int horizontalSpacing() const;
        int verticalSpacing() const;
        Qt::Orientations expandingDirections() const;
        bool hasHeightForWidth() const;
        int heightForWidth(int width) const;
        int count() const;
        QLayoutItem *itemAt(int index) const;
        QSize minimumSize() const;
        void setGeometry(const QRect &rect);
        QSize sizeHint() const;
        QLayoutItem *takeAt(int index);

    private:
        int doLayout(const QRect &rect, bool testOnly) const;
        int smartSpacing(QStyle::PixelMetric pm) const;

        QList<QLayoutItem *> itemList;
        int m_hSpace;
        int m_vSpace;
};

#endif // CIRCULARLAYOUT_H
