#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/pathfinder/NodeType.h"
#include "mc/world/level/pathfinder/PathCompletionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class PathfinderNode;
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

    using NodeArray = std::vector<Path::Node>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Path::Node>> mNodes;
    ::ll::TypedStorage<8, 8, ulong>                    mIndex;
    ::ll::TypedStorage<1, 1, ::PathCompletionType>     mCompletionType;
    // NOLINTEND

public:
    // prevent constructor by default
    Path& operator=(Path const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void buildFromNodes(std::vector<Path::Node>&&, ::PathCompletionType const);

    MCNAPI ::BlockPos const& currentPos() const;

    MCNAPI ::Vec3 currentPos(::Actor const*) const;

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

    MCNAPI ~Path();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
