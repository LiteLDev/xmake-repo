#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/pathfinder/NodeType.h"
#include "mc/world/level/pathfinder/PathCompletionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class PathfinderNode;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
// clang-format on

class Path {
public:
    // Path inner types declare
    // clang-format off
    class Node;
    // clang-format on

    // Path inner types define
    class Node {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> pos;
        ::ll::TypedStorage<4, 4, ::NodeType>  type;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using NodeArray = std::vector<Path::Node>;
#else // @header-generator platform
    using NodeArray = ::std::vector<::Path::Node>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Path::Node>> mNodes;
    ::ll::TypedStorage<8, 8, ulong>                    mIndex;
    ::ll::TypedStorage<1, 1, ::PathCompletionType>     mCompletionType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Path::Node>> mNodes;
    ::ll::TypedStorage<8, 8, uint64>                       mIndex;
    ::ll::TypedStorage<1, 1, ::PathCompletionType>         mCompletionType;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Path& operator=(Path const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void buildFromNodes(std::vector<Path::Node>&&, ::PathCompletionType const);
#else // @header-generator platform
    MCNAPI ::Vec3 currentPos(::Actor const* actor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos const& currentPos() const;
#else // @header-generator platform
    MCNAPI ::Vec3 getPos(::Actor const* actor, uint64 index) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 currentPos(::Actor const*) const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::Path> makeCopy() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool endsInXZ(::Vec3 const&);

    MCNAPI ::PathCompletionType getCompletionType() const;

    MCNAPI ::Vec3 getEndPos() const;

    MCNAPI ulong getIndex() const;

    MCNAPI ::BlockPos const& getLastPos() const;

    MCNAPI ::BlockPos const& getNodePos(ulong) const;

    MCNAPI ::NodeType getNodeType(ulong) const;

    MCNAPI ::Vec3 getPos(::Actor const*, ulong) const;

    MCNAPI ulong getSize() const;

    MCNAPI bool isDone() const;

    MCNAPI bool isValid() const;

    MCNAPI std::unique_ptr<Path> makeCopy() const;

    MCNAPI void next();

    MCNAPI bool sameAs(::Path*) const;

    MCNAPI void setIndex(ulong);

    MCNAPI void setSize(ulong);
#else // @header-generator platform
    MCNAPI void setSize(uint64 length);
#endif // @header-generator platform

    MCNAPI ~Path();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
