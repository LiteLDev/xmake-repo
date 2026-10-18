#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

class WaypointGroup {
public:
    // WaypointGroup inner types declare
    // clang-format off
    class WaypointHandle;
    // clang-format on

    // WaypointGroup inner types define
    class WaypointHandle {
    public:
        // WaypointHandle inner types declare
        // clang-format off
        struct Hasher;
        // clang-format on

        // WaypointHandle inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        struct Hasher {
        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ulong operator()(::WaypointGroup::WaypointHandle const&) const;
            // NOLINTEND
        };
#else // @header-generator platform
        struct Hasher {};
#endif // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::mce::UUID> mUUID;
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator<(::WaypointGroup::WaypointHandle const&) const;

        MCNAPI bool operator==(::WaypointGroup::WaypointHandle const&) const;
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WaypointGroup() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool has(::WaypointGroup::WaypointHandle const&) const = 0;
#else // @header-generator platform
    virtual bool has(::WaypointGroup::WaypointHandle const& handle) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool remove(::WaypointGroup::WaypointHandle const&) = 0;
#else // @header-generator platform
    virtual bool remove(::WaypointGroup::WaypointHandle const& handle) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
