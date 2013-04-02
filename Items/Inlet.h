#ifndef INLET_H
#define INLET_H

#include <QSharedPointer>
#include "Item.h"
#include "_2RealApplication.h"

using namespace _2Real::app;
namespace Uber {

    class Inlet : public Item
    {
        Q_OBJECT
    public:
        Inlet(QObject *parent = 0);
        Inlet(const Inlet &other);
        Inlet( const InletHandle &handle, QObject *parent = 0 );
        ~Inlet();
        void            setInletHandle(const InletHandle& handle );
        InletHandle     getInletHandle() const;
    private:
        InletHandle     m_InletHandle;
    signals:
    public slots:
    };
    typedef QSharedPointer<Inlet> InletRef;
    Q_DECLARE_METATYPE(Inlet)
}
#endif // INLET_H
