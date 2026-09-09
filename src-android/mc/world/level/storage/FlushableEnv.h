#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlushableEnv : public ::leveldb::EnvWrapper {
public:
    // prevent constructor by default
    FlushableEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlushableEnv() = default;

    virtual void flushToPermanentStorage() = 0;
    // NOLINTEND
};
