#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BehaviorDefinition;
class BehaviorNode;
class BehaviorTreeDefinitionPtr;
namespace Json { class Value; }
// clang-format on

class BehaviorFactory {
public:
    // BehaviorFactory inner types define
    using DefinitionCreator = std::function<std::unique_ptr<BehaviorDefinition>()>;

    using NodeCreator = std::function<std::unique_ptr<BehaviorNode>()>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::pair<std::function<std::unique_ptr<BehaviorDefinition> ()>, std::function<std::unique_ptr<BehaviorNode> ()>>>> mFactoryPairs;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BehaviorFactory();

    MCNAPI void _initNodes();

    MCNAPI std::unique_ptr<BehaviorDefinition>
           loadNodeDefinition(std::string const&, ::Json::Value, ::BehaviorTreeDefinitionPtr&) const;

    MCNAPI void registerNodePair(
        std::string const&,
        std::function<std::unique_ptr<BehaviorDefinition>()>,
        std::function<std::unique_ptr<BehaviorNode>()>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
