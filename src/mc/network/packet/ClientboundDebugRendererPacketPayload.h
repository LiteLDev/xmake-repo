#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"

class ClientboundDebugRendererPacketPayload {
public:
    // ClientboundDebugRendererPacketPayload inner types declare
    // clang-format off
    struct DebugMarkerData;
    // clang-format on

    // ClientboundDebugRendererPacketPayload inner types define
    enum class PayloadType : uchar {
        Invalid            = 0,
        ClearDebugMarkers  = 1,
        AddDebugMarkerCube = 2,
    };

    struct DebugMarkerData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>  text;
        ::ll::TypedStorage<4, 12, ::Vec3>       position;
        ::ll::TypedStorage<4, 16, ::mce::Color> color;
        ::ll::TypedStorage<8, 8, ulong>         durationMS;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> text;
        ::ll::TypedStorage<4, 12, ::Vec3>        position;
        ::ll::TypedStorage<4, 16, ::mce::Color>  color;
        ::ll::TypedStorage<8, 8, uint64>         durationMS;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ClientboundDebugRendererPacketPayload::PayloadType>                   mType;
    ::ll::TypedStorage<8, 72, std::optional<ClientboundDebugRendererPacketPayload::DebugMarkerData>> mDebugMarkerData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientboundDebugRendererPacketPayload(::ClientboundDebugRendererPacketPayload::PayloadType);

    MCNAPI ClientboundDebugRendererPacketPayload(
        std::string,
        ::mce::Color const&,
        ::Vec3 const&,
        std::chrono::duration<long long, std::ratio<1, 1000>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientboundDebugRendererPacketPayload::PayloadType);

    MCNAPI void*
    $ctor(std::string, ::mce::Color const&, ::Vec3 const&, std::chrono::duration<long long, std::ratio<1, 1000>>);
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ClientboundDebugRendererPacketPayload::PayloadType> mType;
    ::ll::TypedStorage<8, 80, ::std::optional<::ClientboundDebugRendererPacketPayload::DebugMarkerData>>
        mDebugMarkerData;
#endif // @header-generator platform
    // NOLINTEND
};
