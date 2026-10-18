#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/PlayerBlockActionData.h"
#include "mc/network/packet/PlayerActionType.h"
#include "mc/platform/Result.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class BlockPos;
class ReadOnlyBinaryStream;
#else // @header-generator platform
struct PlayerBlockActionData;
#endif // @header-generator platform
// clang-format on

class PlayerBlockActions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<PlayerBlockActionData>> mActions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::PlayerBlockActionData>> mActions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAbortDestroyBlock(::BlockPos const&, int);
#else // @header-generator platform
    MCAPI ::gsl::span<::PlayerBlockActionData const> get() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addContinueDestroyBlock(::BlockPos const&, int);

    MCNAPI void addCrackBlock(::BlockPos const&, int);

    MCNAPI void addDeserializedAction(::PlayerBlockActionData const&);

    MCNAPI void addPredictDestroyBlock(::BlockPos const&, int);

    MCNAPI void addStartDestroyBlock(::BlockPos const&, int);

    MCNAPI void addStopDestroyBlock();

    MCNAPI void clear();

    MCNAPI ::PlayerBlockActionData const* findFirstOfType(::PlayerActionType) const;

    MCNAPI ::gsl::span<const PlayerBlockActionData> get() const;

    MCNAPI ::PlayerBlockActions& operator=(::PlayerBlockActions&&);

    MCNAPI bool operator==(::PlayerBlockActions const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::PlayerBlockActions const& other) const;
#endif // @header-generator platform
    // NOLINTEND
};
