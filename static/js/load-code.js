(() => {
  // const { Prism, PerfectScrollbar } = window;
  const { Prism } = window;

  // $('.js-area-code > pre').each(function () {
  //   const ps = new PerfectScrollbar($(this)[0], {
  //     wheelSpeed: 1.2
  //   });
  // });

  $('.js-single-src').each(function () {
    const $src = $(this);
    const lang = $src.children('.js-filename-code').attr('value');
    const code = $src.children('.js-filename-code').attr('data-code');

    $.get(`https://vnspoj.github.io/codelearn-solution/${lang}/${code}.${lang}`, (code) => {
      const highlightCode = Prism.highlight(code, Prism.languages[lang]);
      $src.find('.js-source-code')
        .addClass(`language-${lang}`)
        .html(highlightCode);
    });

    $src.find('.js-toggle-code').click(function () {
      $src.children('.js-area-code').slideToggle(500, 'linear');
      const $this = $(this);
      if ($this.attr('data-visible') == '1') {
        $this.attr('data-visible', '0');
        $this.children('span.text').text('Show');
        $this.children('i.fa').removeClass('fa-eye-slash').addClass('fa-eye');
      } else {
        $this.attr('data-visible', '1');
        $this.children('span.text').text('Hide');
        $this.children('i.fa').removeClass('fa-eye').addClass('fa-eye-slash');
      }
    });

    if (lang != 'go') {
      // not golang -> hide source code
      $src.children('.js-area-code').slideUp()
    }
  });

})();
