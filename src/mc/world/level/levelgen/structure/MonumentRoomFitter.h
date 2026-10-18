#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class OceanMonumentPiece;
class Random;
class RoomDefinition;
// clang-format on

class MonumentRoomFitter {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MonumentRoomFitter();
#else // @header-generator platform
    virtual ~MonumentRoomFitter() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool fits(::RoomDefinition const&) const = 0;
#else // @header-generator platform
    virtual bool fits(::RoomDefinition const& definition) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<OceanMonumentPiece> create(int&, std::shared_ptr<RoomDefinition>, ::Random&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::OceanMonumentPiece>
    create(int& orientation, ::std::shared_ptr<::RoomDefinition> definition, ::Random& random) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
