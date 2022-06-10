#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H

#include "Command.h"
#include "Light.h"

class LightOffCommand: public Command{
    private:
    Light* m_light;

    public:
    LightOffCommand(Light* light);
    void execute() override;
    void undo() override;
};

#endif // LIGHTOFFCOMMAND_H