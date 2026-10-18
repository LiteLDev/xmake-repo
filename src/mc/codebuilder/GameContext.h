#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/codebuilder/Block.h"
#include "mc/codebuilder/Item.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    struct ObjectTypeList;
#else // @header-generator platform
#endif // @header-generator platform
    struct ItemTypeList;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ObjectTypeList;
#endif // @header-generator platform
    // clang-format on

    // GameContext inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ObjectTypeList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>> localizedNames;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>> rawNames;
        ::ll::TypedStorage<8, 24, std::vector<CodeBuilder::Block>>        entries;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct ItemTypeList {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>> localizedNames;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>> rawNames;
        ::ll::TypedStorage<8, 24, std::vector<CodeBuilder::Item>>         entries;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 64> mUnk99ac7c;
        ::ll::UntypedStorage<8, 64> mUnk8dc5cd;
        ::ll::UntypedStorage<8, 24> mUnk9844ff;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemTypeList& operator=(ItemTypeList const&);
        ItemTypeList(ItemTypeList const&);
        ItemTypeList();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ItemTypeList();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using MobTypeList = std::unordered_map<std::string, std::vector<std::string>>;
#else // @header-generator platform
    struct ObjectTypeList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk47fc85;
        ::ll::UntypedStorage<8, 64> mUnkac1051;
        ::ll::UntypedStorage<8, 24> mUnk7b2de4;
        // NOLINTEND

    public:
        // prevent constructor by default
        ObjectTypeList& operator=(ObjectTypeList const&);
        ObjectTypeList(ObjectTypeList const&);
        ObjectTypeList();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ObjectTypeList();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<std::string>>> mMobs;
    ::ll::TypedStorage<8, 104, ::CodeBuilder::GameContext::ObjectTypeList>               mBlocks;
    ::ll::UntypedStorage<8, 112>                                                         mItems;
    ::ll::UntypedStorage<8, 48>                                                          mLevelGetter;
    ::ll::UntypedStorage<8, 48>                                                          mTutorialContent;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64>  mUnkec8ea4;
    ::ll::UntypedStorage<8, 152> mUnk55791e;
    ::ll::UntypedStorage<8, 152> mUnka2ed89;
    ::ll::UntypedStorage<8, 64>  mUnk8ef71e;
    ::ll::UntypedStorage<8, 64>  mUnkfd6f86;
    // NOLINTEND

public:
    // prevent constructor by default
    GameContext& operator=(GameContext const&);
    GameContext(GameContext const&);
    GameContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Json::Value blocksToJson() const;

    MCNAPI ::Json::Value getFileJson(::std::string const& filePath, ::std::string const& fileContents) const;

    MCNAPI ::Json::Value getFilepathJson(::std::string const& filePath) const;

    MCNAPI ::Json::Value getTutorialJson(::std::string const& tutorialPath) const;

    MCNAPI ::Json::Value itemsToJson() const;

    MCNAPI ::Json::Value mobsToJson() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::CodeBuilder::GameContext> create(::std::function<::ILevel*()> levelGetter);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CodeBuilder
