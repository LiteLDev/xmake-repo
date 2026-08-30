#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
// clang-format on

struct ScoreboardId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>                  mRawID;
    ::ll::TypedStorage<8, 8, ::IdentityDefinition*> mIdentityDef;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong getHash() const;

    MCNAPI ::IdentityDefinition const& getIdentityDef() const;

    MCNAPI bool isValid() const;

    MCNAPI bool operator!=(::ScoreboardId const&) const;

    MCNAPI ::ScoreboardId& operator=(::ScoreboardId const&);

    MCNAPI bool operator==(::ScoreboardId const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ScoreboardId& INVALID();
    // NOLINTEND
};
