#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DataDrivenRendererPool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 312> mUnk515b88;
    ::ll::UntypedStorage<8, 144> mUnk8256e1;
    ::ll::UntypedStorage<8, 24>  mUnk44869a;
    ::ll::UntypedStorage<8, 24>  mUnk77af2f;
    ::ll::UntypedStorage<8, 24>  mUnkcaacb6;
    ::ll::UntypedStorage<8, 24>  mUnk72a251;
    ::ll::UntypedStorage<8, 24>  mUnk84cc93;
    ::ll::UntypedStorage<8, 24>  mUnk786765;
    ::ll::UntypedStorage<8, 24>  mUnk180af8;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererPool& operator=(DataDrivenRendererPool const&);
    DataDrivenRendererPool(DataDrivenRendererPool const&);
    DataDrivenRendererPool();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DataDrivenRendererPool();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
