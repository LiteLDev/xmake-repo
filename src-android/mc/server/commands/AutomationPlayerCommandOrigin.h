#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkIdentifier.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/PlayerCommandOrigin.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CompoundTag;
class Level;
class Player;
struct ActorUniqueID;
struct CommandOriginData;
// clang-format on

class AutomationPlayerCommandOrigin : public ::PlayerCommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>          mRequestId;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationPlayerCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AutomationPlayerCommandOrigin();

    virtual std::string const& getRequestId() const;

    virtual std::string getName() const;

    virtual std::unique_ptr<CommandOrigin> clone() const;

    virtual ::NetworkIdentifier const& getSourceId() const;

    virtual ::CommandOriginType getOriginType() const;

    virtual ::CommandOriginData toCommandOriginData() const;

    virtual ::CompoundTag serialize() const;

    virtual bool isValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AutomationPlayerCommandOrigin(std::string const&, ::Player&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, ::Player&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getRequestId() const;

    MCNAPI std::string $getName() const;

    MCNAPI std::unique_ptr<CommandOrigin> $clone() const;

    MCNAPI ::NetworkIdentifier const& $getSourceId() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

    MCNAPI ::CommandOriginData $toCommandOriginData() const;

    MCNAPI ::CompoundTag $serialize() const;

    MCNAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
