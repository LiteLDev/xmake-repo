#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
// clang-format on

struct ScoreboardId {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long>                  mRawID;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64>                 mRawID;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IdentityDefinition*> mIdentityDef;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong getHash() const;

    MCNAPI ::IdentityDefinition const& getIdentityDef() const;

    MCNAPI bool isValid() const;

    MCNAPI bool operator!=(::ScoreboardId const&) const;

    MCNAPI ::ScoreboardId& operator=(::ScoreboardId const&);

    MCNAPI bool operator==(::ScoreboardId const&) const;
    // NOLINTEND
#else // @header-generator platform
    bool operator==(ScoreboardId const& other) const { return mRawID == other.mRawID; }
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScoreboardId& INVALID();
#else // @header-generator platform
    MCAPI static ::ScoreboardId& INVALID();
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

namespace std {
template <>
struct hash<::ScoreboardId> {
    size_t operator()(::ScoreboardId const& id) const noexcept {
        ActorUniqueID uId{};
        uId.rawID = id.mRawID;
        return std::hash<ActorUniqueID>()(uId);
    }
};
} // namespace std
#endif // @header-generator platform
