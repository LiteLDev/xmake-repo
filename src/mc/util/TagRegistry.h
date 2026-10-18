#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/IDType.h"
#include "mc/util/IndexSet.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, typename T1>
class TagRegistry {};
#else // @header-generator platform
template <typename TagID, typename TagSetID>
class TagRegistry {
public:
    std::unordered_map<HashedString, uint64> mTagIndexMap;
    std::vector<std::string>                 mTags;
    std::vector<IndexSet>                    mSets;
    TagSetID                                 mEmptyTagSet;

    MCAPI TagID tryGetTagID(const std::string&) const;
    MCAPI std::vector<std::string> const getTagsInSet(TagSetID) const;
    MCAPI TagSetID                       removeTagFromSet(const TagID, TagSetID&);
    MCAPI TagSetID                       addTagToSet(const TagID, TagSetID&);
    MCAPI TagID                          acquireTag(const std::string&);
    MCAPI TagSetID                       getTagSetID(const IndexSet&);
    MCAPI TagSetID                       getTagSetID(const std::vector<TagID>&);
};
#endif // @header-generator platform
