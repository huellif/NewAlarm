symbian:{
TARGET.UID3 = 0x20071ae2
LIBS += -lapparc -lapgrfx
VERSION = 1.1.0

    my_deployment.pkg_prerules += vendorinfo

    DEPLOYMENT += my_deployment

    vendorinfo += "%{\"huellifSoft\"}" ":\"huellifSoft\""
}

SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()
