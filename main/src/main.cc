#include <gtkmm.h>

class MyWindow : public Gtk::Window
{
public:
  MyWindow();

protected:
  // Signal handlers:
  void on_button_clicked();

  Gtk::Box VBox;

  Gtk::Entry LText;
  LPass;

  Gtk::Button LB;
};

MyWindow::MyWindow() : VBox(Gtk::Orientation::VERTICAL)
{
  set_title("Basic application");
  set_default_size(800, 600);
}

MyWindow::MyWindow() : LText("Username || Email");
{
}

// LB = Button;
MyWindow::MyWindow()
    : LB("Login");
{
  // Sets the margin around the button.
  LB.set_margin(10);

  // When the button receives the "clicked" signal, it will call the
  // on_button_clicked() method defined below.
  LB.signal_clicked().connect(sigc::
                                  mem_fun(*this,
                                          &MyWindow::on_button_clicked));

  // This packs the button into the Window (a container).
  set_child(LB);
}

// Evento de Click Do button
void MyWindow::on_button_clicked()
{
}
// end event

int main(int argc, char *argv[])
{
  auto app = Gtk::Application::create("org.gtkmm.examples.base");

  return app->make_window_and_run<MyWindow>(argc, argv);
}