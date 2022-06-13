#ifndef STEREOONCOMMAND_H
#define STEREOONCOMMAND_H

#include "Command.h"
#include "Stereo.h"

class StereoOnCommand: public Command{
    private:
    Stereo* m_stereo;

    public:
    StereoOnCommand(Stereo* stereo);
    void execute() override;
    void undo() override;
};

#endif // STEREOONCOMMAND_H