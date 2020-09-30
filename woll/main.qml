import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.3
import com.myself 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Wake {
        id: waketest
    }

    ColumnLayout {
        id: mainLayout
        anchors.fill: parent
        anchors.margins: appWindow.margin
        GroupBox {
            id: rowBox
            title: "MAC"
            Layout.fillWidth: true

            RowLayout {
                id: rowLayout
                anchors.fill: parent
                TextField {
                    placeholderText: "MAC address"
                    Layout.fillWidth: true
                }
                Button {
                    text: "Turn on"
                    onClicked: {
                       // console.log('1 234566');
                              //console.log(waketest.test())
                                console.log(waketest.wake_now("23:5:45:3454"))
                            }
                }
            }
        }
    }
}
