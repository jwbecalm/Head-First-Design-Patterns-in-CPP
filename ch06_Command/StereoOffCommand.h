#ifndef STEREOOFFCOMMAND_H
#define STEREOOFFCOMMAND_H

#include "Command.h"
#include "Stereo.h"

class StereoOffCommand: public Command{
    private:
    Stereo* m_stereo;

    public:
    StereoOffCommand(Stereo* stereo);
    void execute() override;
    void undo() override;
};

#endif // STEREOOFFCOMMAND_H