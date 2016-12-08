// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASHAREDPOINTERVIEWPORTENTITY_H
        #define RECMASHAREDPOINTERVIEWPORTENTITY_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RViewportEntity.h"
            
            typedef QSharedPointer<RViewportEntity> RViewportEntityPointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaSharedPointerViewportEntity {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getREntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRObject(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStaticPropertyTypeIds
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewportId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setViewportId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStatus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStatus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setViewCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewTarget
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setViewTarget
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setHeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRotation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRotation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isOverall
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOverall
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RViewportEntity* getSelf(const QString& fName, QScriptContext* context)
    ;static RViewportEntity* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    