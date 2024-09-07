using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BookStore
{
    public class Book
    {
        public int BookId
        {
            get => default;
            set
            {
            }
        }

        public string Title
        {
            get => default;
            set
            {
            }
        }

        public decimal Price
        {
            get => default;
            set
            {
            }
        }

        public int CategoryId
        {
            get => default;
            set
            {
            }
        }

        public Category Category
        {
            get => default;
            set
            {
            }
        }

        public ICollection<BookAuthor> BookAuthors
        {
            get => default;
            set
            {
            }
        }

        public BookDetail BookDetail
        {
            get => default;
            set
            {
            }
        }
    }
}