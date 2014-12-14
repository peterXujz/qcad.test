// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAACTIONADAPTER_H
        #define RECMAACTIONADAPTER_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "REcmaShellActionAdapter.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaActionAdapter {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRAction(QScriptContext *context,
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
        beginEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGraphicsView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        finishEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        suspendEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        resumeEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        escapeEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        keyPressEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        keyReleaseEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mousePressEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mouseMoveEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mouseReleaseEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mouseDoubleClickEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        wheelEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        tabletEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        swipeGestureEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        panGestureEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        pinchGestureEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        commandEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        commandEventPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        coordinateEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        coordinateEventPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        entityPickEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        entityPickEventPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        propertyChangeEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMultiSnapPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMultiSnapAngles
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updatePreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        applyOperation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RActionAdapter* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellActionAdapter* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    