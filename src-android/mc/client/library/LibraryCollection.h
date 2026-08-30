#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/instruction/InstructionalContentCollection.h"

// auto generated forward declare list
// clang-format off
class EducationContentServices;
class LessonItem;
class LibraryCollectionConfig;
class LibraryItem;
// clang-format on

class LibraryCollection : public ::InstructionalContentCollection,
                          public ::std::enable_shared_from_this<LibraryCollection> {
public:
    // LibraryCollection inner types define
    enum class LibrarySortMode : uchar {
        Title          = 0,
        NewThenTitle   = 1,
        LockedThenDate = 2,
        Relevance      = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<LibraryCollectionConfig>> mConfig;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LibraryItem>>             mInvalidItem;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryCollection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryCollection();

    virtual void refresh();

    virtual void fetchItems();

    virtual void onItemImported(::LessonItem const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::LibraryItem& getItem(int);

    MCNAPI std::shared_ptr<const LibraryCollectionConfig> getLibraryCollectionConfig() const;

    MCNAPI void setSortMode(::LibraryCollection::LibrarySortMode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $refresh();

    MCNAPI void $fetchItems();

    MCNAPI void $onItemImported(::LessonItem const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
