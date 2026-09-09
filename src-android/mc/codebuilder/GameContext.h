#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/Block.h"
#include "mc/codebuilder/Item.h"

// auto generated forward declare list
// clang-format off
class ILevel;
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class GameContext {
public:
    // GameContext inner types declare
    // clang-format off
    struct ObjectTypeList;
    struct ItemTypeList;
    // clang-format on

    // GameContext inner types define
    struct ObjectTypeList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>> localizedNames;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>> rawNames;
        ::ll::TypedStorage<8, 24, std::vector<CodeBuilder::Block>>        entries;
        // NOLINTEND
    };

    struct ItemTypeList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>> localizedNames;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>> rawNames;
        ::ll::TypedStorage<8, 24, std::vector<CodeBuilder::Item>>         entries;
        // NOLINTEND
    };

    using MobTypeList = std::unordered_map<std::string, std::vector<std::string>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<std::string>>> mMobs;
    ::ll::TypedStorage<8, 104, ::CodeBuilder::GameContext::ObjectTypeList>               mBlocks;
    ::ll::UntypedStorage<8, 112>                                                         mItems;
    ::ll::UntypedStorage<8, 48>                                                          mLevelGetter;
    ::ll::UntypedStorage<8, 48>                                                          mTutorialContent;
    // NOLINTEND
};

} // namespace CodeBuilder
