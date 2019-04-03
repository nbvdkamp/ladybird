#include <LibGUI/GFrame.h>

class TaskbarWidget final : public GFrame {
public:
    TaskbarWidget(GWidget* parent = nullptr);
    virtual ~TaskbarWidget() override;

    virtual const char* class_name() const override { return "TaskbarWidget"; }

private:
    virtual void paint_event(GPaintEvent&) override;

};
