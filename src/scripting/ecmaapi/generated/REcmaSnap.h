// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASNAP_H
        #define RECMASNAP_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "REcmaShellSnap.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaSnap {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        snap
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        showUiOptions
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hideUiOptions
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        suspendEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        finishEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEntityIds
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStatus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStatus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLastSnap
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        reset
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RSnap* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellSnap* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue toScriptValueEnumStatus(QScriptEngine* engine, const RSnap::Status& value)
    ;static  void fromScriptValueEnumStatus(const QScriptValue& value, RSnap::Status& out)
    ;};
    #endif
    