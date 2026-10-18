#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/world/level/poi/TypeId.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
#if defined(LL_PLAT_A) // @header-generator platform
class CommandRegistry;
class Dimension;
class Level;
#else // @header-generator platform
#endif // @header-generator platform
namespace Poi { class TagProvider; }
namespace Poi { struct Registry; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Poi { struct Type; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct LocatePoiCommand : public ::Command {
public:
    // LocatePoiCommand inner types declare
    // clang-format off
    struct ResourceOrTagArg;
    // clang-format on

    // LocatePoiCommand inner types define
    enum class CmdName : uchar {
        Poi = 0,
    };

    enum class PoiTagType : uint64 {};

    struct ResourceOrTagArg {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::Poi::TypeId>       mType;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>               mTag;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64>              mTag;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Poi::TagProvider*> mTags;
        ::ll::TypedStorage<8, 8, ::Poi::Registry*>    mRegistry;
        // NOLINTEND
    };

    using PoiType = ::Poi::TypeId;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::LocatePoiCommand::CmdName>    mCmd;
    ::ll::TypedStorage<2, 2, ::Poi::TypeId>                  mPoiType;
    ::ll::TypedStorage<8, 8, ::LocatePoiCommand::PoiTagType> mPoiTagType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
