(() => {
  const { PerfectScrollbar, ScrollReveal } = window;

  const sr = ScrollReveal();

  const $scrollTop = $('#js-scroll-top');
  const $topElement = $('#js-top-element');

  $(window).scroll(function () {
    const $this = $(this);
    if ($this.scrollTop() > 800) {
      $scrollTop.fadeIn();
    } else {
      $scrollTop.fadeOut();
    }
  });

  $scrollTop.click(() => {
    $('html, body').animate({
      scrollTop: $topElement.offset().top
    }, 500);
  });

  const revealElementsOnScroll = () => {
    sr.reveal('.js-reveal', {
      duration: 1000,
      delay: 300
    });
  };

  revealElementsOnScroll();

  function isBaseUrl() {
    return window.location.pathname == '/code-learn/' ||
      window.location.pathname == '/code-learn';
  }

  function handleQuery() {
    if (!isBaseUrl()) return;
    const urlParams = new URLSearchParams(window.location.search);
    const queryText = urlParams.get('q');
    if (!queryText || queryText == '') return;
    const searchInput = document.querySelector('#js-search__input');
    searchInput.value = queryText;
    searchInput.dispatchEvent(new Event('input'));
  }

  handleQuery();

})();
