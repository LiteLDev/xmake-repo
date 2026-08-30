#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IPackIOProvider;
class ResourceLocation;
// clang-format on

struct DirectoryAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourceLocation const&> mLocation;
    ::ll::TypedStorage<1, 1, bool>                      mCreateWriter;
    ::ll::TypedStorage<1, 1, bool>                      mCanRecurse;
    ::ll::TypedStorage<8, 8, ::IPackIOProvider const&>  mIO;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryAccessStrategyOptions& operator=(DirectoryAccessStrategyOptions const&);
    DirectoryAccessStrategyOptions(DirectoryAccessStrategyOptions const&);
    DirectoryAccessStrategyOptions();
};
