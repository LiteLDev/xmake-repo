#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/FetchResult.h"

// auto generated forward declare list
// clang-format off
class EducationContentServices;
class LessonItem;
// clang-format on

class InstructionalContentCollection {
public:
    // InstructionalContentCollection inner types define
    using SortMethod = std::function<bool(const LessonItem&, const LessonItem&)>;

    using FilterMethod = std::function<bool(const LessonItem&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                         mServices;
    ::ll::UntypedStorage<8, 48>                                         mSort;
    ::ll::UntypedStorage<8, 48>                                         mFilter;
    ::ll::TypedStorage<1, 1, bool>                                      mInProgressQuery;
    ::ll::TypedStorage<4, 4, int>                                       mNumItemsInProgress;
    ::ll::TypedStorage<1, 1, bool>                                      mShouldRefreshContent;
    ::ll::TypedStorage<1, 1, ::FetchResult>                             mFetchResult;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<LessonItem>>>   mVisualContents;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<LessonItem>>> mContents;
    // NOLINTEND

public:
    // prevent constructor by default
    InstructionalContentCollection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InstructionalContentCollection();

    virtual void addItem(std::shared_ptr<LessonItem>);

    virtual void refresh();

    virtual void fetchItems() = 0;

    virtual void onItemImported(::LessonItem const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::FetchResult getFetchResult() const;

    MCNAPI ulong getSize() const;

    MCNAPI ulong getUnfilteredSize() const;

    MCNAPI bool isFetchInProgress() const;

    MCNAPI void setFilterMethod(std::function<bool(const LessonItem&)>);

    MCNAPI void setSortMethod(std::function<bool(const LessonItem&, const LessonItem&)>);

    MCNAPI bool tick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _onAllFetchesComplete(std::weak_ptr<InstructionalContentCollection>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addItem(std::shared_ptr<LessonItem>);

    MCNAPI void $refresh();

    MCNAPI void $onItemImported(::LessonItem const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class InstructionalContentCollection {};
#endif // @header-generator platform
