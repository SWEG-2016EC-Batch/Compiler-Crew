```mermaid
graph TB
    classDef default fill:#f9f,stroke:#333,stroke-width:4px;
    Member((Member))
    Librarian((Librarian))

    Member -->|Borrow Book| (Borrow Book)
    Member -->|Return Book| (Return Book)
    Member -->|Search Catalog| (Search Catalog)

    Librarian -->|Add Book| (Add Book)
    Librarian -->|Search Catalog| (Search Catalog)
    Librarian -->|Borrow Book| (Borrow Book)
    Librarian -->|Return Book| (Return Book)
