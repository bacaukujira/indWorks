#include "intrfc.h"
#include "intrfcplugin.h"

#include <QtPlugin>

intrfcPlugin::intrfcPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void intrfcPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool intrfcPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *intrfcPlugin::createWidget(QWidget *parent)
{
    return new intrfc(parent);
}

QString intrfcPlugin::name() const
{
    return QLatin1String("intrfc");
}

QString intrfcPlugin::group() const
{
    return QLatin1String("");
}

QIcon intrfcPlugin::icon() const
{
    return QIcon();
}

QString intrfcPlugin::toolTip() const
{
    return QLatin1String("");
}

QString intrfcPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool intrfcPlugin::isContainer() const
{
    return false;
}

QString intrfcPlugin::domXml() const
{
    return QLatin1String("<widget class=\"intrfc\" name=\"intrfc\">\n</widget>\n");
}

QString intrfcPlugin::includeFile() const
{
    return QLatin1String("intrfc.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(intrfcplugin, intrfcPlugin)
#endif // QT_VERSION < 0x050000
