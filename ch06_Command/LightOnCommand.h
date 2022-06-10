#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "Command.h"
#include "Light.h"

class LightOnCommand: public Command{
    private:
    Light* m_light;

    public:
    LightOnCommand(Light* light);
    void execute() override;
    void undo() override;
};

#endif // LIGHTONCOMMAND_H