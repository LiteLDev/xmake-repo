#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ddrv2__PoolHandle.h"

// auto generated forward declare list
// clang-format off
class GameVersion;
struct AttachableRendererPool;
struct DataDrivenRendererPool;
// clang-format on

class DataDrivenRendererRegistry {
public:
    // DataDrivenRendererRegistry inner types declare
    // clang-format off
    struct DataDrivenRemappingData;
    struct AttachableRemappingData;
    template<typename T0> class PoolSlotMap;
    // clang-format on

    // DataDrivenRendererRegistry inner types define
    struct DataDrivenRemappingData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk29629a;
        ::ll::UntypedStorage<1, 1> mUnkeef99a;
        ::ll::UntypedStorage<1, 1> mUnk2dc9d4;
        // NOLINTEND

    public:
        // prevent constructor by default
        DataDrivenRemappingData& operator=(DataDrivenRemappingData const&);
        DataDrivenRemappingData(DataDrivenRemappingData const&);
        DataDrivenRemappingData();
    };

    struct AttachableRemappingData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk303fcd;
        // NOLINTEND

    public:
        // prevent constructor by default
        AttachableRemappingData& operator=(AttachableRemappingData const&);
        AttachableRemappingData(AttachableRemappingData const&);
        AttachableRemappingData();
    };

    template <typename T0>
    class PoolSlotMap {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56>  mUnk858581;
    ::ll::UntypedStorage<8, 72>  mUnke40d7a;
    ::ll::UntypedStorage<8, 72>  mUnk7d071d;
    ::ll::UntypedStorage<8, 624> mUnkd49e92;
    ::ll::UntypedStorage<8, 48>  mUnke49003;
    ::ll::UntypedStorage<8, 48>  mUnkf1233f;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererRegistry& operator=(DataDrivenRendererRegistry const&);
    DataDrivenRendererRegistry(DataDrivenRendererRegistry const&);
    DataDrivenRendererRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataDrivenRendererRegistry(::GameVersion const& version, ::DataDrivenRendererPool&& fallbackPool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GameVersion const& version, ::DataDrivenRendererPool&& fallbackPool);
    // NOLINTEND
};
