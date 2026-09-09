#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/ModelParent.h"

// auto generated forward declare list
// clang-format off
class GeometryGroup;
namespace Json { class Value; }
// clang-format on

class GeometryInheritanceTree {
public:
    // GeometryInheritanceTree inner types declare
    // clang-format off
    struct GeometryInheritanceTreeNode;
    // clang-format on

    // GeometryInheritanceTree inner types define
    struct GeometryInheritanceTreeNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                                        mName;
        ::ll::TypedStorage<8, 24, std::string>                                                        mFileName;
        ::ll::TypedStorage<8, 96, ::ModelParent>                                                      mModelParent;
        ::ll::TypedStorage<8, 24, std::vector<GeometryInheritanceTree::GeometryInheritanceTreeNode*>> mChildren;
        ::ll::TypedStorage<1, 1, bool>                                                                mIsVisited;
        // NOLINTEND

    public:
        // prevent constructor by default
        GeometryInheritanceTreeNode& operator=(GeometryInheritanceTreeNode const&);
        GeometryInheritanceTreeNode(GeometryInheritanceTreeNode const&);
        GeometryInheritanceTreeNode();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~GeometryInheritanceTreeNode();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<Json::Value>>> mLoadedJsonFiles;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, GeometryInheritanceTree::GeometryInheritanceTreeNode>> mNodes;
    ::ll::TypedStorage<4, 40, std::mutex> mNodeLock;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    GeometryInheritanceTree& operator=(GeometryInheritanceTree const&);
    GeometryInheritanceTree(GeometryInheritanceTree const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::GeometryInheritanceTree::GeometryInheritanceTreeNode& _node(std::string const&, std::string const&);

    MCNAPI void addInheritance(std::string const&, std::string const&, ::ModelParent const&, std::string const&);

    MCNAPI void visitBFS(
        std::weak_ptr<GeometryGroup>,
        std::function<void(std::weak_ptr<GeometryGroup>, const std::string&, const ModelParent&)>
    ) const;
    // NOLINTEND
};
