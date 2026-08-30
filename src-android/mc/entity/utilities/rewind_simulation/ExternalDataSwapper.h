#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
struct ExternalDataComponent;
struct ExternalDataInterface;
struct ExternalDataSnapshot;
// clang-format on

namespace RewindSimulation {

class ExternalDataSwapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ExternalDataComponent*>               mExposedData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ExternalDataInterface>> mOriginalData;
    ::ll::TypedStorage<8, 8, ::EntityRegistry&>                      mRegistry;
    ::ll::TypedStorage<8, 8, ::ExternalDataSnapshot*>                mSnapshot;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalDataSwapper& operator=(ExternalDataSwapper const&);
    ExternalDataSwapper(ExternalDataSwapper const&);
    ExternalDataSwapper();
};

} // namespace RewindSimulation
