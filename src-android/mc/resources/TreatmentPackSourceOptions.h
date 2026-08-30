#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/PackSourceOptions.h"

struct TreatmentPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackSourceOptions> mBase;
    ::ll::UntypedStorage<1, 24>                   mPath;
    ::ll::TypedStorage<1, 1, ::PackType>          mType;
    // NOLINTEND

public:
    // prevent constructor by default
    TreatmentPackSourceOptions& operator=(TreatmentPackSourceOptions const&);
    TreatmentPackSourceOptions(TreatmentPackSourceOptions const&);
    TreatmentPackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TreatmentPackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
